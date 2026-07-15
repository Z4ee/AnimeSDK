#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_489FDA65763BAAD3;
class Class_1_C64A90CC94D1A46C;
class Class_1_D27BF54F25500E5F;
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

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHFINAL_OFFSET UNITYSDK_OFFSET(0x14F0B450)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV2_OFFSET UNITYSDK_OFFSET(0x14F0B120)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV3_OFFSET UNITYSDK_OFFSET(0x14F0B370)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CLEARPUZZLEHELPERSTATE_OFFSET UNITYSDK_OFFSET(0x14F0AFC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14F0A970)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_EXECUTEPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0x14F0C750)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETCLIPEDVALIDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x14F081F0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETHOVERMATERIAL_OFFSET UNITYSDK_OFFSET(0x14F0B8D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELHINTTEX_OFFSET UNITYSDK_OFFSET(0x14F0A3E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELOUTERHINTTEX_OFFSET UNITYSDK_OFFSET(0x14F0B7B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_INIT_OFFSET UNITYSDK_OFFSET(0x14F098D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_0F2A088CF7BD337E_OFFSET UNITYSDK_OFFSET(0x14F0C930)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3AAE6BCB5C643E83_OFFSET UNITYSDK_OFFSET(0x14F0BBA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14F0C8E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8EF43FC3A4ED8F5E_OFFSET UNITYSDK_OFFSET(0x14F0C6E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x14F0C7A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A6309623F20EFB07_OFFSET UNITYSDK_OFFSET(0x14F0BED0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x14F09F00)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_CFD6A0E3E2AD1441_OFFSET UNITYSDK_OFFSET(0x14F0B9A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0x14F0A600)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x14F0AD40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_PLAYSELECTEDITEMHELPERHINTPERFORM_OFFSET UNITYSDK_OFFSET(0x14F0CA20)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_REFRESHBACKGROUNDHINT_OFFSET UNITYSDK_OFFSET(0x14F0A750)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESETOPERATION_OFFSET UNITYSDK_OFFSET(0x14F0AE80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESET_OFFSET UNITYSDK_OFFSET(0x14F0A470)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0x14F072D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x14F0B4C0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFINISHFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0x14F0B610)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_TICK_OFFSET UNITYSDK_OFFSET(0x14F0AB80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0CDA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel_TypeDefinitionIndex = 74781;

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
		::Il2CppArray<::Class_1_C64A90CC94D1A46C*>* Field_5_10; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* AllMovebleItems; // 0x68
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllBoardItems; // 0x70
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllPreviewItems; // 0x78
		::System::String* OraclePuzzleTexPath; // 0x80
		::System::String* OraclePuzzleOuterTexPath; // 0x88
		::Il2CppArray<::System::Int32>* Field_5_16; // 0x90
		::Il2CppArray<::System::Int32>* Field_5_17; // 0x98
		::Class_1_489FDA65763BAAD3* Field_5_18; // 0xA0
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
		::Class_1_C64A90CC94D1A46C* Field_5_29; // 0x100

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

		::System::Void Method_5_A6309623F20EFB07(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A6309623F20EFB07_OFFSET))(this, a1);
		}

		::System::Void Method_5_CFD6A0E3E2AD1441(::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_CFD6A0E3E2AD1441_OFFSET))(this, a1);
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

		::System::Void Method_5_B6BB704B01BCC35B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_B6BB704B01BCC35B_OFFSET))(this);
		}

		::Class_1_C64A90CC94D1A46C* Method_5_0F2A088CF7BD337E()
		{
			return ((::Class_1_C64A90CC94D1A46C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_0F2A088CF7BD337E_OFFSET))(this);
		}
	};
}
