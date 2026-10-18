#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_489FDA65763BAAD3;
class Class_1_5DF5F62C68EF718F;
class Class_1_C64A90CC94D1A46C;
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

#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHFINAL_OFFSET UNITYSDK_OFFSET(0xDD4CB10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV2_OFFSET UNITYSDK_OFFSET(0xDD50FC0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CHECKISFINISHV3_OFFSET UNITYSDK_OFFSET(0xDD51210)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_CLEARPUZZLEHELPERSTATE_OFFSET UNITYSDK_OFFSET(0xDD493B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD49510)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_EXECUTEPUZZLEHELPER_OFFSET UNITYSDK_OFFSET(0xDD4DE10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETCLIPEDVALIDLOCALPOS_OFFSET UNITYSDK_OFFSET(0xDD4F7B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETHOVERMATERIAL_OFFSET UNITYSDK_OFFSET(0xDD51310)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELHINTTEX_OFFSET UNITYSDK_OFFSET(0xDD50A80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_GETPANELOUTERHINTTEX_OFFSET UNITYSDK_OFFSET(0xDD4A2E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_INIT_OFFSET UNITYSDK_OFFSET(0xDD49B40)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_0F2A088CF7BD337E_OFFSET UNITYSDK_OFFSET(0xDD52320)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3AAE6BCB5C643E83_OFFSET UNITYSDK_OFFSET(0xDD515E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xDD522D0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_8EF43FC3A4ED8F5E_OFFSET UNITYSDK_OFFSET(0xDD52120)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xDD52190)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_A6309623F20EFB07_OFFSET UNITYSDK_OFFSET(0xDD51910)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xDD505A0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_CFD6A0E3E2AD1441_OFFSET UNITYSDK_OFFSET(0xDD513E0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0xDD50B10)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_METHOD_5_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0xDD50E80)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_PLAYSELECTEDITEMHELPERHINTPERFORM_OFFSET UNITYSDK_OFFSET(0xDD4BEA0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_REFRESHBACKGROUNDHINT_OFFSET UNITYSDK_OFFSET(0xDD50C60)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESETOPERATION_OFFSET UNITYSDK_OFFSET(0xDD4DFD0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_RESET_OFFSET UNITYSDK_OFFSET(0xDD4A700)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEINPERFORM_OFFSET UNITYSDK_OFFSET(0xDD4E930)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xDD4AC90)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_STARTFINISHFADEOUTPERFORM_OFFSET UNITYSDK_OFFSET(0xDD4D760)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL_TICK_OFFSET UNITYSDK_OFFSET(0xDD48900)
#define RPG_CLIENT_PROP_ORACLEPUZZLEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDD52420)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzlePanel_TypeDefinitionIndex = 78737;

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
		::Il2CppArray<::Class_1_C64A90CC94D1A46C*>* DKAOLDHKOGK; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* AllMovebleItems; // 0x68
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllBoardItems; // 0x70
		::Il2CppArray<::RPG::Client::Prop::OraclePuzzleItem*>* AllPreviewItems; // 0x78
		::System::String* OraclePuzzleTexPath; // 0x80
		::System::String* OraclePuzzleOuterTexPath; // 0x88
		::Il2CppArray<::System::Int32>* GOAOGFBABIK; // 0x90
		::Il2CppArray<::System::Int32>* LNIPNHCDPIH; // 0x98
		::Class_1_489FDA65763BAAD3* KALOJNBFJII; // 0xA0
		::UnityEngine::Material* AMNPCCJFNDJ; // 0xA8
		::UnityEngine::Texture* JFNBBIIEJGG; // 0xB0
		::UnityEngine::Texture* IKFDGILOFBK; // 0xB8
		::Class_1_5DF5F62C68EF718F* CMAPKMPLADB; // 0xC0
		::UnityEngine::Transform* EDGIMPBIBHE; // 0xC8
		::UnityEngine::Renderer* MPMEKBFAJDJ; // 0xD0
		::UnityEngine::Renderer* BPJNKDCIEJC; // 0xD8
		::UnityEngine::Renderer* JKKDEOHNPKG; // 0xE0
		::UnityEngine::Color GJPKGFFJAKB; // 0xE8
		::System::Single ALDCPHDGCHF; // 0xF8
		::Class_1_C64A90CC94D1A46C* FCBJOFOMIJI; // 0x100

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
