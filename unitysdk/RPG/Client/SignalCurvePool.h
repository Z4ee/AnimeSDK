#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class SignalCurvePoolEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOL_GET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xA47E3B0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_02AA17F528A7083C_OFFSET UNITYSDK_OFFSET(0xA47ED00)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_19035547B38554A7_OFFSET UNITYSDK_OFFSET(0xA47EAE0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_2AB12BF7608A20EF_OFFSET UNITYSDK_OFFSET(0xA47EDC0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3C3BC7530E3D1C00_OFFSET UNITYSDK_OFFSET(0xA47EC30)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_640514F2FC7A7607_1_OFFSET UNITYSDK_OFFSET(0xA47EF10)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0xA47EE50)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0xA47E430)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xA47E3D0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_AE4F744DD72146D5_OFFSET UNITYSDK_OFFSET(0xA47F220)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_DF1269DF412ABB91_OFFSET UNITYSDK_OFFSET(0xA47EFF0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA47E640)
#define RPG_CLIENT_SIGNALCURVEPOOL_SET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xA47E3C0)
#define RPG_CLIENT_SIGNALCURVEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA47F2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePool_TypeDefinitionIndex = 58120;

	class SignalCurvePool : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::RPG::Client::SignalCurvePool** StaticGet__currentScenePool()
		{
			return (::RPG::Client::SignalCurvePool**)Il2CppClass::FromTypeDefinitionIndex(SignalCurvePool_TypeDefinitionIndex)->GetStaticField(0x23EB0);
		}
		static ::RPG::Client::SignalCurvePool** StaticGet__instance()
		{
			return (::RPG::Client::SignalCurvePool**)Il2CppClass::FromTypeDefinitionIndex(SignalCurvePool_TypeDefinitionIndex)->GetStaticField(0x23EB8);
		}
		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* _curves; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::SignalCurvePoolEntry*>* _idToEntry; // 0x20
		::System::Int32 _nextId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SignalCurvePool* get_CurrentScenePool()
		{
			return ((::RPG::Client::SignalCurvePool*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_GET_CURRENTSCENEPOOL_OFFSET))();
		}

		static ::System::Void set_CurrentScenePool(::RPG::Client::SignalCurvePool* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SignalCurvePool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_SET_CURRENTSCENEPOOL_OFFSET))(a1);
		}

		::System::Void Method_3_8BCB3191E6BEE7CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_8BCB3191E6BEE7CB_OFFSET))(this);
		}

		::System::Void Method_3_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Int32 Method_3_19035547B38554A7(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_19035547B38554A7_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* Method_3_3C3BC7530E3D1C00(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3C3BC7530E3D1C00_OFFSET))(this, a1);
		}

		::RPG::Client::SignalCurvePoolEntry* Method_3_02AA17F528A7083C(::System::Int32 a1)
		{
			return ((::RPG::Client::SignalCurvePoolEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_02AA17F528A7083C_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* Method_3_2AB12BF7608A20EF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_2AB12BF7608A20EF_OFFSET))(this);
		}

		::System::Void Method_3_640514F2FC7A7607(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_640514F2FC7A7607_OFFSET))(this, a1);
		}

		::System::Void Method_3_640514F2FC7A7607_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_640514F2FC7A7607_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_DF1269DF412ABB91(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_DF1269DF412ABB91_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_AE4F744DD72146D5(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_AE4F744DD72146D5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F978A1D172468895_OFFSET))(this);
		}
	};
}
