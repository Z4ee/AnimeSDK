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

#define CLASS_2_BE5E024943FBFDC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EC95A0)
#define CLASS_2_BE5E024943FBFDC5_GET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ECAAE0)
#define CLASS_2_BE5E024943FBFDC5_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15EC9B20)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_0DA2366A4A7DBAA7_OFFSET UNITYSDK_OFFSET(0x15EC99D0)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_0DC71D7A58FDD8E3_OFFSET UNITYSDK_OFFSET(0x15ECA7A0)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_1E8636B0C75F4A00_OFFSET UNITYSDK_OFFSET(0x15ECA740)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x15EC9B80)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x15ECA240)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_972179ACA713A4B1_OFFSET UNITYSDK_OFFSET(0x15EC9900)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x15EC96C0)
#define CLASS_2_BE5E024943FBFDC5_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15EC9490)
#define CLASS_2_BE5E024943FBFDC5_SET_FOLLOWSOURCE_OFFSET UNITYSDK_OFFSET(0x15ECAAF0)
#define CLASS_2_BE5E024943FBFDC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ECABC0)
#define CLASS_2_BE5E024943FBFDC5__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECAB00)

inline static constexpr unsigned int Class_2_BE5E024943FBFDC5_TypeDefinitionIndex = 56939;

class Class_2_BE5E024943FBFDC5 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::RPG::Client::MonoEffectHideReason>** StaticGet_HGMKJKPKHLG()
	{
		return (::Il2CppArray<::RPG::Client::MonoEffectHideReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE5E024943FBFDC5_TypeDefinitionIndex)->GetStaticField(0x45060);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::TriggerEffectParamsRef, ::RPG::Client::TriggerEffectParamsRef>* FJFBAGIAAKK; // 0x18
	::RPG::GameCore::GameEntity* _FollowSource_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* FPKLJFCNAAB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_972179ACA713A4B1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_972179ACA713A4B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E8636B0C75F4A00(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_1E8636B0C75F4A00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DC71D7A58FDD8E3(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_0DC71D7A58FDD8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_0DA2366A4A7DBAA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_METHOD_2_0DA2366A4A7DBAA7_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_FollowSource()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_GET_FOLLOWSOURCE_OFFSET))(this);
	}

	::System::Void set_FollowSource(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE5E024943FBFDC5_SET_FOLLOWSOURCE_OFFSET))(this, a1);
	}
};
