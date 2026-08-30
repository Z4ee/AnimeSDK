#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class SignalCurvePoolEntry; }
namespace RPG::Client { class SignalCurvePoolMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF88310)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__CURVES_OFFSET UNITYSDK_OFFSET(0x1AF870D0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1AF87050)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1AF86DE0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0x1AF88000)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AF879F0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3F07804D8892197E_1_OFFSET UNITYSDK_OFFSET(0x1AF87F60)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x1AF87ED0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AF877D0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1AF87930)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1AF87990)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x1AF87A30)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1AF87770)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_69CEABFED67045C9_OFFSET UNITYSDK_OFFSET(0x1AF87C90)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_7C2F4A88645035A8_OFFSET UNITYSDK_OFFSET(0x1AF87A90)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x1AF87510)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_942DCC931DF352DA_OFFSET UNITYSDK_OFFSET(0x1AF87DC0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1AF87830)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_B260AE72D1F1CB0C_OFFSET UNITYSDK_OFFSET(0x1AF88270)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_F91B0AD50C072273_OFFSET UNITYSDK_OFFSET(0x1AF87D30)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1AF87140)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF88320)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF88330)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePoolBehavior_TypeDefinitionIndex = 70928;

	class SignalCurvePoolBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::RPG::Client::SignalCurvePoolBehavior** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::SignalCurvePoolBehavior**)Il2CppClass::FromTypeDefinitionIndex(SignalCurvePoolBehavior_TypeDefinitionIndex)->GetStaticField(0x21D00);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::SignalCurvePoolEntry*>* _idToEntry; // 0x38
		::System::Int32 _nextId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Method_3_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Int32 Method_3_7C2F4A88645035A8(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_7C2F4A88645035A8_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* Method_3_69CEABFED67045C9(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_69CEABFED67045C9_OFFSET))(this, a1);
		}

		::RPG::Client::SignalCurvePoolEntry* Method_3_F91B0AD50C072273(::System::Int32 a1)
		{
			return ((::RPG::Client::SignalCurvePoolEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_F91B0AD50C072273_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* Method_3_942DCC931DF352DA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_942DCC931DF352DA_OFFSET))(this);
		}

		::System::Void Method_3_3F07804D8892197E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3F07804D8892197E_OFFSET))(this, a1);
		}

		::System::Void Method_3_3F07804D8892197E_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3F07804D8892197E_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_3129BDB20712C068(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_3129BDB20712C068_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_B260AE72D1F1CB0C(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_B260AE72D1F1CB0C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET))(this);
		}

		::RPG::Client::SignalCurvePoolMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SignalCurvePoolMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* get__Curves()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__CURVES_OFFSET))(this);
		}

		static ::RPG::Client::SignalCurvePoolBehavior* get_Instance()
		{
			return ((::RPG::Client::SignalCurvePoolBehavior*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::SignalCurvePoolBehavior* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SignalCurvePoolBehavior*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_SET_INSTANCE_OFFSET))(a1);
		}
	};
}
