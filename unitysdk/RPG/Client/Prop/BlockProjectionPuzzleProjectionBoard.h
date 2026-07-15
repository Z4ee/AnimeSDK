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

#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_CANCELPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x16DEA8C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DECD30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_ISFINISH_OFFSET UNITYSDK_OFFSET(0x16DEA1D0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x16DED7A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x16DED060)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x16DED9A0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_METHOD_5_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x16DECB30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_PLAYSUCCESSPERFORM_OFFSET UNITYSDK_OFFSET(0x16DE9FC0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_RESET_OFFSET UNITYSDK_OFFSET(0x16DEC8C0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SELECTPROJECTIONBOARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x16DEAA30)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONPREVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x16DECF00)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_SETPROJECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x16DE9DD0)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UNFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x16DEB090)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD_UPDATEPROJECTIONBOARD_OFFSET UNITYSDK_OFFSET(0x16DE9E20)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DEDC50)
#define RPG_CLIENT_PROP_BLOCKPROJECTIONPUZZLEPROJECTIONBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEDBD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex = 74257;

	class BlockProjectionPuzzleProjectionBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE30);
		}
		static ::System::String** StaticGet_Field_5_1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE38);
		}
		static ::System::String** StaticGet_Field_5_2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE40);
		}
		static ::System::String** StaticGet_Field_5_3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE48);
		}
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE50);
		}
		static ::System::String** StaticGet_Field_5_5()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE58);
		}
		static ::System::String** StaticGet_Field_5_6()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE60);
		}
		static ::System::String** StaticGet_Field_5_7()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BlockProjectionPuzzleProjectionBoard_TypeDefinitionIndex)->GetStaticField(0x6AE68);
		}
		::System::Single ProjectionDistance; // 0x18
		::System::Single BlockSize; // 0x1C
		::System::Single BlockPadding; // 0x20
		::RPG::Client::Prop::RubikCubeFrameFace Face; // 0x24
		::UnityEngine::Transform* MatchEffect; // 0x28
		::UnityEngine::GameObject* ItemPrefab; // 0x30
		::System::Boolean Field_5_14; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::Prop::BlockProjectionPuzzleProjectionItem*>* _AllItems; // 0x40
		::Il2CppArray<::RPG::Client::Prop::BlockProjectionPuzzleProjectionItem*>* _LookupItems; // 0x48
		::Il2CppArray<::System::Int32>* Field_5_17; // 0x50
		::Il2CppArray<::System::Int32>* Field_5_18; // 0x58
		::Il2CppArray<::System::Int32>* Field_5_19; // 0x60
		::RPG::Client::MonoEffectManager* Field_5_20; // 0x68
		::System::UInt32 Field_5_21; // 0x70

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
