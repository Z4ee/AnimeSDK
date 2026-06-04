#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF8485B093010BEF_METHOD_1_60906B4B420EB50D_OFFSET UNITYSDK_OFFSET(0xA4B5930)
#define CLASS_1_FF8485B093010BEF_METHOD_1_D02A943E69A5767C_OFFSET UNITYSDK_OFFSET(0xA4B5740)
#define CLASS_1_FF8485B093010BEF_METHOD_1_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0xA4B5810)
#define CLASS_1_FF8485B093010BEF__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4B5AB0)
#define CLASS_1_FF8485B093010BEF__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B5A30)

inline static constexpr unsigned int Class_1_FF8485B093010BEF_TypeDefinitionIndex = 61417;

class Class_1_FF8485B093010BEF : public ::System::Object
{
public:
	static ::Class_1_FF8485B093010BEF** StaticGet_Field_1_0()
	{
		return (::Class_1_FF8485B093010BEF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF8485B093010BEF_TypeDefinitionIndex)->GetStaticField(0x5FD60);
	}
	::System::Collections::Generic::Dictionary_2<::System::Action*, ::RPG::Client::NotifyHandler*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_D02A943E69A5767C(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF_METHOD_1_D02A943E69A5767C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF_METHOD_1_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_1_60906B4B420EB50D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF8485B093010BEF_METHOD_1_60906B4B420EB50D_OFFSET))(this, a1);
	}
};
