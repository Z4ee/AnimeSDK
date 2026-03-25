#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3CCAD74C2340564D;
class Class_1_D27BF54F25500E5F;
class Class_1_FBFD3B80A9E5E8A6;
namespace RPG::Client::Prop { class OracleItemData; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace RPG::Client::Prop { class OraclePuzzleSolution; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHFINAL_OFFSET UNITYSDK_OFFSET(0xA0FEF20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV2_OFFSET UNITYSDK_OFFSET(0xA104210)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV3_OFFSET UNITYSDK_OFFSET(0xA104490)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CLEARPUZZLEHELPERSTATE_OFFSET UNITYSDK_OFFSET(0xA0FBAC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0FBC30)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_EXECUTEPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0xA1001A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETCLIPEDVALIDLOCALPOS_OFFSET UNITYSDK_OFFSET(0xA102420)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETHOVERMATERIAL_OFFSET UNITYSDK_OFFSET(0xA1045A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELHINTTEX_OFFSET UNITYSDK_OFFSET(0xA103CD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELOUTERHINTTEX_OFFSET UNITYSDK_OFFSET(0xA0FC990)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_INIT_OFFSET UNITYSDK_OFFSET(0xA0FC2B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_0F2A088CF7BD337E_OFFSET UNITYSDK_OFFSET(0xA105480)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0xA104BF0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_1BEB8FC7D3B68FDE_OFFSET UNITYSDK_OFFSET(0xA104670)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3AAE6BCB5C643E83_OFFSET UNITYSDK_OFFSET(0xA104850)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA105430)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8706B4640D53FE36_OFFSET UNITYSDK_OFFSET(0xA103410)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8EF43FC3A4ED8F5E_OFFSET UNITYSDK_OFFSET(0xA105280)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA1052F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0xA103D60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xA1040D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_PLAYSELECTEDITEMHELPERHINTPERFORM_OFFSET UNITYSDK_OFFSET(0xA0FE3B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_REFRESHBACKGROUNDHINT_OFFSET UNITYSDK_OFFSET(0xA103EB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESETOPERATION_OFFSET UNITYSDK_OFFSET(0xA100360)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESET_OFFSET UNITYSDK_OFFSET(0xA0FCDC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0xA100C40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xA0FD310)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFINISHFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xA0FFBB0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_TICK_OFFSET UNITYSDK_OFFSET(0xA0FB050)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA1055A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel_TypeDefinitionIndex = 64187;

	class OraclePuzzlePanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* PreviewRoot; // 0x18
		::UnityEngine::Transform* BoardRoot; // 0x20
		::System::Single PreviewScale; // 0x28
		::System::Single BoardScale; // 0x2C
		::UnityEngine::GameObject* ItemPrefab; // 0x30
		::UnityEngine::Vector2 ValidRegionCenter; // 0x38
		::System::Single ValidRegionRadius; // 0x40
		::Il2CppArray<::RPG::Client::Prop::OracleItemData*>* PuzzleItemDataArray; // 0x48
		::System::Boolean IsHelperAvailable; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleSolution*>* PuzzleSolutions; // 0x58
		::Il2CppArray<::Class_1_FBFD3B80A9E5E8A6*>* Field_5_10; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* AllMovebleItems; // 0x68
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllBoardItems; // 0x70
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllPreviewItems; // 0x78
		::System::String* OraclePuzzleTexPath; // 0x80
		::System::String* OraclePuzzleOuterTexPath; // 0x88
		::Il2CppArray<::System::Int32>* Field_5_16; // 0x90
		::Il2CppArray<::System::Int32>* Field_5_17; // 0x98
		::Class_1_3CCAD74C2340564D* Field_5_18; // 0xA0
		::UnityEngine::Material* Field_5_19; // 0xA8
		::UnityEngine::Texture* Field_5_20; // 0xB0
		::UnityEngine::Texture* Field_5_21; // 0xB8
		::Class_1_D27BF54F25500E5F* Field_5_22; // 0xC0
		::UnityEngine::Transform* Field_5_23; // 0xC8
		::UnityEngine::Renderer* Field_5_24; // 0xD0
		::UnityEngine::Renderer* Field_5_25; // 0xD8
		::UnityEngine::Renderer* Field_5_26; // 0xE0
		::UnityEngine::Color Field_5_27; // 0xE8
		::System::Single Field_5_28; // 0xF8
		::Class_1_FBFD3B80A9E5E8A6* Field_5_29; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Renderer* a1, ::UnityEngine::Renderer* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESETOPERATION_OFFSET))(this);
		}

		::System::Boolean CheckIsFinishV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV2_OFFSET))(this);
		}

		::System::Boolean CheckIsFinishV3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV3_OFFSET))(this);
		}

		::System::Boolean CheckIsFinishFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHFINAL_OFFSET))(this);
		}

		::System::Void StartFadeinPerform(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEINPERFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FD7514C64FB1B043(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_FD7514C64FB1B043_OFFSET))(this, a1);
		}

		::System::Void StartFadeoutPerform(::System::Action* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEOUTPERFORM_OFFSET))(this, a1, a2);
		}

		::System::Void StartFinishFadeoutPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFINISHFADEOUTPERFORM_OFFSET))(this);
		}

		::UnityEngine::Texture* GetPanelHintTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELHINTTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetPanelOuterHintTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELOUTERHINTTEX_OFFSET))(this);
		}

		::UnityEngine::Material* GetHoverMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETHOVERMATERIAL_OFFSET))(this);
		}

		::System::Void RefreshBackGroundHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_REFRESHBACKGROUNDHINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetClipedValidLocalPos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETCLIPEDVALIDLOCALPOS_OFFSET))(this, a1);
		}

		::System::Void Method_5_DD152A1A30757DCD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_DD152A1A30757DCD_OFFSET))(this, a1);
		}

		::System::Void Method_5_1A7F9F3B13A09C96(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_1A7F9F3B13A09C96_OFFSET))(this, a1);
		}

		::System::Void Method_5_1BEB8FC7D3B68FDE(::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_1BEB8FC7D3B68FDE_OFFSET))(this, a1);
		}

		::System::Void Method_5_3AAE6BCB5C643E83(::Il2CppArray<::System::Int32>*& a1, ::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3AAE6BCB5C643E83_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_5_8EF43FC3A4ED8F5E(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8EF43FC3A4ED8F5E_OFFSET))(this, a1);
		}

		::System::Void ExecutePuzzleHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_EXECUTEPUZZLEHELPER_OFFSET))(this);
		}

		::System::Void ClearPuzzleHelperState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CLEARPUZZLEHELPERSTATE_OFFSET))(this);
		}

		::System::Void Method_5_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Boolean PlaySelectedItemHelperHintPerform(::RPG::Client::Prop::OraclePuzzleItem* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::OraclePuzzleItem*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_PLAYSELECTEDITEMHELPERHINTPERFORM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8706B4640D53FE36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8706B4640D53FE36_OFFSET))(this);
		}

		::Class_1_FBFD3B80A9E5E8A6* Method_5_0F2A088CF7BD337E()
		{
			return ((::Class_1_FBFD3B80A9E5E8A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_0F2A088CF7BD337E_OFFSET))(this);
		}
	};
}
