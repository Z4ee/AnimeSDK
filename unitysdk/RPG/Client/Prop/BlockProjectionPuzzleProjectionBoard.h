#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class BlockProjectionPuzzleProjectionItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CANCELPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x189AF250)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189B1C10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_ISFINISH_OFFSET UNITYSDK_OFFSET(0x189AEB60)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x189B2680)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x189B1F40)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x189B2880)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x189B1A10)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_PLAYSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0x189AE950)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_RESET_OFFSET UNITYSDK_OFFSET(0x189B17A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SELECTPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x189AF3C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONPREVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x189B1DE0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x189AE760)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UNFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x189AFCD0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UPDATEPROJECTIONBOARD_OFFSET UNITYSDK_OFFSET(0x189AE7B0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x189B2B30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x189B2AB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex = 77742;

	class BlockProjectionPuzzleProjectionBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_FDIDIIPBEHA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCC0);
		}
		static ::System::String** StaticGet_KFKGCOICHLD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCC8);
		}
		static ::System::String** StaticGet_HGINNPJAFGJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCD0);
		}
		static ::System::String** StaticGet_KHIAFOEMCEH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCD8);
		}
		static ::System::String** StaticGet_DHDHLMEJAPO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCE0);
		}
		static ::System::String** StaticGet_LNPIOBONPDM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCE8);
		}
		static ::System::String** StaticGet_HBKPGPHJAIK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCF0);
		}
		static ::System::String** StaticGet_AGHJJCMCAAJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x5FCF8);
		}
		::System::Single ProjectionDistance; // 0x18
		::System::Single BlockSize; // 0x1C
		::System::Single BlockPadding; // 0x20
		::RPG::Client::Prop::RubikCubeFrameFace Face; // 0x24
		::UnityEngine::Transform* MatchEffect; // 0x28
		::UnityEngine::GameObject* ItemPrefab; // 0x30
		::System::Boolean PIPLLENMLIM; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleProjectionItem*>* _AllItems; // 0x40
		::Il2CppArray<::RPG::Client::Prop::BlockProjectionPuzzleProjectionItem*>* _LookupItems; // 0x48
		::Il2CppArray<::System::Int32>* JCFHCPMIPLC; // 0x50
		::Il2CppArray<::System::Int32>* DOECBPGBKEL; // 0x58
		::Il2CppArray<::System::Int32>* CJJBJOKNHIM; // 0x60
		::RPG::Client::MonoEffectManager* KENLJFPJNJO; // 0x68
		::System::UInt32 BDKNELJBENO; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CCTOR_OFFSET))();
		}

		::System::Void Reset(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_RESET_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_ISFINISH_OFFSET))(this);
		}

		::System::Int32 UnFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UNFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void SetProjectionState(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetProjectionPreviewState(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONPREVIEWSTATE_OFFSET))(this, a1);
		}

		::System::Void SelectProjectionBoardPreview(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SELECTPROJECTIONBOARDPREVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelProjectionBoardPreview(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CANCELPROJECTIONBOARDPREVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateProjectionBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UPDATEPROJECTIONBOARD_OFFSET))(this);
		}

		::System::Void PlaySuccessPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_PLAYSUCCESSPERFORM_OFFSET))(this);
		}

		::System::Void Method_5_CFE6FB160FFF5938()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_CFE6FB160FFF5938_OFFSET))(this);
		}

		::System::Void Method_5_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_5_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_5_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_B2C52ACF9D9B435B_OFFSET))(this);
		}
	};
}
