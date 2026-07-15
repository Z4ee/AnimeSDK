#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1C33325EDDA7C390_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14566BA0)
#define CLASS_2_1C33325EDDA7C390_GET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x14567FF0)
#define CLASS_2_1C33325EDDA7C390_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14567160)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x14567010)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x145671C0)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x145678A0)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_972179ACA713A4B1_OFFSET UNITYSDK_OFFSET(0x14566F60)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_D5488C04C40C3C29_OFFSET UNITYSDK_OFFSET(0x14567E00)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x14566CE0)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x14566A60)
#define CLASS_2_1C33325EDDA7C390_METHOD_2_E8FA39B35BCA626E_OFFSET UNITYSDK_OFFSET(0x14567DA0)
#define CLASS_2_1C33325EDDA7C390_SET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x14568000)
#define CLASS_2_1C33325EDDA7C390__CCTOR_OFFSET UNITYSDK_OFFSET(0x145680F0)
#define CLASS_2_1C33325EDDA7C390__CTOR_OFFSET UNITYSDK_OFFSET(0x14568010)

inline static constexpr unsigned int Class_2_1C33325EDDA7C390_TypeDefinitionIndex = 54387;

class Class_2_1C33325EDDA7C390 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::Client::MonoEffectHideReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::Client::MonoEffectHideReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1C33325EDDA7C390_TypeDefinitionIndex)->GetStaticField(0x63070);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* _FollowSource_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_972179ACA713A4B1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_972179ACA713A4B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8FA39B35BCA626E(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_E8FA39B35BCA626E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D5488C04C40C3C29(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_D5488C04C40C3C29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_FollowSource()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_GET_FOLLOWSOURCE_OFFSET))(this);
	}

	::System::Void set_FollowSource(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1C33325EDDA7C390_SET_FOLLOWSOURCE_OFFSET))(this, a1);
	}
};
