#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class StageHarmonyBaseLinkSlot;
class StageHarmonyDemodulator;
namespace RPG::Client { class StageHarmonySignalDemodulatorMonoPlugin; }
namespace RPG::Client { class StageHarmonyWeatherController; }
namespace RPG::Client { class StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTFROMSTATE_OFFSET UNITYSDK_OFFSET(0xE0DD6E0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xE0DD8A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTTOSTATE_OFFSET UNITYSDK_OFFSET(0xE0DD7C0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_STATES_OFFSET UNITYSDK_OFFSET(0xE0DD600)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE0DC380)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_0ACC9D57A6206C0A_OFFSET UNITYSDK_OFFSET(0xE0DFC70)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_12FE5A2FFAA2EECC_OFFSET UNITYSDK_OFFSET(0xE0DE360)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_1BF801F323AEB07B_OFFSET UNITYSDK_OFFSET(0xE0DED90)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_36B3126FAEF06CA3_OFFSET UNITYSDK_OFFSET(0xE0DCAA0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE0DC400)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4E12A3301519348B_OFFSET UNITYSDK_OFFSET(0xE0DFF50)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4EA089004CC069A2_OFFSET UNITYSDK_OFFSET(0xE0E0100)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_55D6CBA1A803E5A5_OFFSET UNITYSDK_OFFSET(0xE0DF2E0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_5B0856136BC3DF08_OFFSET UNITYSDK_OFFSET(0xE0DEA20)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_701B27667C4F39E6_OFFSET UNITYSDK_OFFSET(0xE0E0060)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xE0DD420)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xE0DE200)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0xE0DC460)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A07C2061B55C1547_OFFSET UNITYSDK_OFFSET(0xE0DDEE0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0xE0DE0C0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xE0DD070)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xE0DD550)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_B7D2C046C76F0D83_OFFSET UNITYSDK_OFFSET(0xE0DDA50)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_BB17F927D5B2EBAC_OFFSET UNITYSDK_OFFSET(0xE0DDBF0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_D70C817A5656CDA9_OFFSET UNITYSDK_OFFSET(0xE0DF990)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_D739676D3B797539_OFFSET UNITYSDK_OFFSET(0xE0DD900)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE0DFFF0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_DE0AAC30985D011A_OFFSET UNITYSDK_OFFSET(0xE0DF5A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xE0DDBA0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_ED3B2BFA369D514A_OFFSET UNITYSDK_OFFSET(0xE0DF050)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E0440)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherControllerBehavior_TypeDefinitionIndex = 70984;

	class StageHarmonyWeatherControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::StageHarmonySignalDemodulatorMonoPlugin* _signalHost; // 0x38
		::System::Collections::Generic::Dictionary_2<::StageHarmonyDemodulator*, ::RPG::Client::StageHarmonyWeatherControllerBehavior_Class_1_B4FB15650237854D*>* _originalSnapshots; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::RPG::Client::StageHarmonyWeatherController* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::StageHarmonyWeatherController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_A002848F130F70CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET))(this);
		}

		::System::Void Method_3_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_3_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_States()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_STATES_OFFSET))(this);
		}

		::System::String* get_CurrentFromState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTFROMSTATE_OFFSET))(this);
		}

		::System::String* get_CurrentToState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTTOSTATE_OFFSET))(this);
		}

		::System::Single get_CurrentProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void Method_3_D739676D3B797539(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_D739676D3B797539_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_B7D2C046C76F0D83(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_B7D2C046C76F0D83_OFFSET))(this, a1);
		}

		::System::Void Method_3_BB17F927D5B2EBAC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_BB17F927D5B2EBAC_OFFSET))(this, a1);
		}

		::System::Void Method_3_E6D3C4C666E119D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_E6D3C4C666E119D9_OFFSET))(this);
		}

		::System::Void Method_3_A07C2061B55C1547()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A07C2061B55C1547_OFFSET))(this);
		}

		::System::Void Method_3_A41DCE32DA5A80B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_A41DCE32DA5A80B1_OFFSET))(this);
		}

		::System::Void Method_3_AB1A8DFD378DB0BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_AB1A8DFD378DB0BE_OFFSET))(this);
		}

		::System::Void Method_3_12FE5A2FFAA2EECC(::StageHarmonyBaseLinkSlot* a1, ::System::String* a2, ::StageHarmonyDemodulator* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyBaseLinkSlot*, ::System::String*, ::StageHarmonyDemodulator*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_12FE5A2FFAA2EECC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Color Method_3_1BF801F323AEB07B(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_1BF801F323AEB07B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_3_ED3B2BFA369D514A(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_ED3B2BFA369D514A_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 Method_3_55D6CBA1A803E5A5(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_55D6CBA1A803E5A5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_DE0AAC30985D011A(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3& a7, ::UnityEngine::Quaternion& a8, ::UnityEngine::Vector3& a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_DE0AAC30985D011A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::AnimationCurve* Method_3_D70C817A5656CDA9(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_D70C817A5656CDA9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Gradient* Method_3_0ACC9D57A6206C0A(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Gradient* a5)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_0ACC9D57A6206C0A_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void Method_3_4E12A3301519348B(::System::String* a1, ::System::String* a2, ::System::String*& a3, ::System::String*& a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4E12A3301519348B_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_3_36B3126FAEF06CA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_36B3126FAEF06CA3_OFFSET))(this);
		}

		static ::System::String* Method_3_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_DA1BF2C227DC3D86_OFFSET))();
		}

		::System::Void Method_3_5B0856136BC3DF08(::StageHarmonyDemodulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_5B0856136BC3DF08_OFFSET))(this, a1);
		}

		::System::Void Method_3_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_937F8473216A3162_OFFSET))(this);
		}

		::System::Void Method_3_4EA089004CC069A2(::StageHarmonyDemodulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_4EA089004CC069A2_OFFSET))(this, a1);
		}

		static ::UnityEngine::Gradient* Method_3_701B27667C4F39E6(::UnityEngine::Gradient* a1)
		{
			return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_METHOD_3_701B27667C4F39E6_OFFSET))(a1);
		}
	};
}
