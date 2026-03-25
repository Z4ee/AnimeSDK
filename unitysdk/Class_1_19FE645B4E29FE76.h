#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2372A81090298262;
class Class_1_6838003491506F6E;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_19FE645B4E29FE76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B59DD0)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8B5A570)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_83BB875EE12F12CD_OFFSET UNITYSDK_OFFSET(0x8B5A420)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_B3B927A95FA4DBA6_OFFSET UNITYSDK_OFFSET(0x8B5A510)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_C295037F92779A7C_OFFSET UNITYSDK_OFFSET(0x8B59FA0)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_F50CC94894ECB3F5_OFFSET UNITYSDK_OFFSET(0x8B59BC0)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_F9260B5B613B5F61_OFFSET UNITYSDK_OFFSET(0x8B59FF0)
#define CLASS_1_19FE645B4E29FE76_METHOD_1_FE9C9ADAFE50F2EA_OFFSET UNITYSDK_OFFSET(0x8B5A170)
#define CLASS_1_19FE645B4E29FE76__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B5A630)
#define CLASS_1_19FE645B4E29FE76__CTOR_OFFSET UNITYSDK_OFFSET(0x8B59610)

inline static constexpr unsigned int Class_1_19FE645B4E29FE76_TypeDefinitionIndex = 42140;

class Class_1_19FE645B4E29FE76 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_19FE645B4E29FE76_TypeDefinitionIndex)->GetStaticField(0x128B0);
	}
	::Class_1_6838003491506F6E* Field_1_2; // 0x10
	::RPG::Client::AdventurePhase* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_2372A81090298262*>* Field_1_1; // 0x20

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F50CC94894ECB3F5(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_F50CC94894ECB3F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F9260B5B613B5F61(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_F9260B5B613B5F61_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE9C9ADAFE50F2EA(::UnityEngine::Vector3 a1, ::System::UInt64& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt64&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_FE9C9ADAFE50F2EA_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_2372A81090298262* Method_1_83BB875EE12F12CD(::System::UInt64 a1)
	{
		return ((::Class_1_2372A81090298262*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_83BB875EE12F12CD_OFFSET))(this, a1);
	}

	static ::System::UInt64 Method_1_C295037F92779A7C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_C295037F92779A7C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B3B927A95FA4DBA6(::System::UInt64 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_B3B927A95FA4DBA6_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19FE645B4E29FE76_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
