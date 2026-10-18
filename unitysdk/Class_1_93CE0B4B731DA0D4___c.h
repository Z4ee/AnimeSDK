#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_017EA97FA3F1B7BC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_93CE0B4B731DA0D4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4A8E20)
#define CLASS_1_93CE0B4B731DA0D4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8E60)
#define CLASS_1_93CE0B4B731DA0D4___C___CTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0xB4A8E70)

inline static constexpr unsigned int Class_1_93CE0B4B731DA0D4___c_TypeDefinitionIndex = 80108;

class Class_1_93CE0B4B731DA0D4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_017EA97FA3F1B7BC*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>** StaticGet___9__39_0()
	{
		return (::System::Func_2<::Class_1_017EA97FA3F1B7BC*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93CE0B4B731DA0D4___c_TypeDefinitionIndex)->GetStaticField(0x6B4C0);
	}
	static ::Class_1_93CE0B4B731DA0D4___c** StaticGet___9()
	{
		return (::Class_1_93CE0B4B731DA0D4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93CE0B4B731DA0D4___c_TypeDefinitionIndex)->GetStaticField(0x6B4C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> __ctor_b__39_0(::Class_1_017EA97FA3F1B7BC* a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>(*)(::PVOID, ::Class_1_017EA97FA3F1B7BC*))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4___C___CTOR_B__39_0_OFFSET))(this, a1);
	}
};
