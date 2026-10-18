#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_463;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_6680B389A28C1730_METHOD_1_3C1D883B34112560_OFFSET UNITYSDK_OFFSET(0x15CC9A30)
#define CLASS_1_6680B389A28C1730_METHOD_1_6F5BC4753AB975F3_OFFSET UNITYSDK_OFFSET(0x15CC97E0)
#define CLASS_1_6680B389A28C1730_METHOD_1_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x15CC9FC0)
#define CLASS_1_6680B389A28C1730_METHOD_1_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0x15CC9B00)
#define CLASS_1_6680B389A28C1730__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CCA0A0)
#define CLASS_1_6680B389A28C1730__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC99F0)

inline static constexpr unsigned int Class_1_6680B389A28C1730_TypeDefinitionIndex = 49349;

class Class_1_6680B389A28C1730 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_6680B389A28C1730*>** StaticGet_MFPNICMCKJG()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_6680B389A28C1730*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6680B389A28C1730_TypeDefinitionIndex)->GetStaticField(0x1C030);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* NGKNDNPPAEC; // 0x10
	::System::Action* NODPAHFJLPH; // 0x18
	::System::Single HNOLFPKINDK; // 0x20
	::System::Single BAGBOHCDFFA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730__CCTOR_OFFSET))();
	}

	static ::Class_1_6680B389A28C1730* Method_1_6F5BC4753AB975F3(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::Class_1_6680B389A28C1730*(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_6F5BC4753AB975F3_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_3C1D883B34112560(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_463*>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_3C1D883B34112560_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_AC3D041EA6F5D8CC_OFFSET))(this);
	}

	::System::Void Method_1_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6680B389A28C1730_METHOD_1_737220D2233A9067_OFFSET))(this);
	}
};
