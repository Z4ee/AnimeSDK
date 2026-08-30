#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F7AC5C2E648206BE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_38;
class Class_0_16E4307DCC419505_40;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_BFD76EE52C9AD680_METHOD_1_07F4353DEF2C16E3_OFFSET UNITYSDK_OFFSET(0x1AAE8EF0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_23CFAEF7A4EBD8DF_OFFSET UNITYSDK_OFFSET(0x1AAE9850)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x1AAE98F0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_2CBE817460D483E9_OFFSET UNITYSDK_OFFSET(0x1AAE9570)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_498D322967FF8B78_1_OFFSET UNITYSDK_OFFSET(0x1AAE93D0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_498D322967FF8B78_OFFSET UNITYSDK_OFFSET(0x1AAE9010)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_58D02DB77B342401_1_OFFSET UNITYSDK_OFFSET(0x1AAE97B0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_58D02DB77B342401_OFFSET UNITYSDK_OFFSET(0x1AAE9710)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_8CF770249E204834_OFFSET UNITYSDK_OFFSET(0x1AAE91A0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x1AAE82B0)
#define CLASS_1_BFD76EE52C9AD680_METHOD_1_FB69830C7FA62722_OFFSET UNITYSDK_OFFSET(0x1AAE8540)
#define CLASS_1_BFD76EE52C9AD680__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE8430)

inline static constexpr unsigned int Class_1_BFD76EE52C9AD680_TypeDefinitionIndex = 36168;

class Class_1_BFD76EE52C9AD680 : public ::System::Object
{
public:
	static ::Class_1_BFD76EE52C9AD680** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_BFD76EE52C9AD680**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BFD76EE52C9AD680_TypeDefinitionIndex)->GetStaticField(0x14C10);
	}
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_40*>* GFAOCKFACHG; // 0x10
	::System::Collections::Generic::Queue_1<::Struct_2_F7AC5C2E648206BE>* GPJLNFMIGKP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_40*>*>* DCNEHLOAIJD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680__CTOR_OFFSET))(this);
	}

	static ::Class_1_BFD76EE52C9AD680* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_BFD76EE52C9AD680*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_FB69830C7FA62722(::Class_0_16E4307DCC419505_40* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_40*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_FB69830C7FA62722_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07F4353DEF2C16E3(::System::Type* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_07F4353DEF2C16E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_498D322967FF8B78(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_498D322967FF8B78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_498D322967FF8B78_1(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_498D322967FF8B78_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2CBE817460D483E9(::Entitas::IEntity* a1, ::System::RuntimeTypeHandle a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_2CBE817460D483E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_58D02DB77B342401(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_58D02DB77B342401_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_58D02DB77B342401_1(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_58D02DB77B342401_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_23CFAEF7A4EBD8DF(::Entitas::IEntity* a1, ::System::RuntimeTypeHandle a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_23CFAEF7A4EBD8DF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_272068886DA88B16_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_40* Method_1_8CF770249E204834(::System::Type* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_40*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BFD76EE52C9AD680_METHOD_1_8CF770249E204834_OFFSET))(this, a1, a2);
	}
};
