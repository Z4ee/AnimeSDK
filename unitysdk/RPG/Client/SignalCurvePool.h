#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class SignalCurvePoolEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOL_GET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xE084190)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_2AB12BF7608A20EF_OFFSET UNITYSDK_OFFSET(0xE084AD0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3129BDB20712C068_OFFSET UNITYSDK_OFFSET(0xE084C90)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3A5CCD2FDB6F9738_OFFSET UNITYSDK_OFFSET(0xE0847F0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3F07804D8892197E_1_OFFSET UNITYSDK_OFFSET(0xE084BF0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0xE084B60)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_69CEABFED67045C9_OFFSET UNITYSDK_OFFSET(0xE0849A0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xE084210)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_B260AE72D1F1CB0C_OFFSET UNITYSDK_OFFSET(0xE084E80)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xE0841B0)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F91B0AD50C072273_OFFSET UNITYSDK_OFFSET(0xE084A40)
#define RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xE084420)
#define RPG_CLIENT_SIGNALCURVEPOOL_SET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xE0841A0)
#define RPG_CLIENT_SIGNALCURVEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xE084F20)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePool_TypeDefinitionIndex = 70927;

	class SignalCurvePool : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::RPG::Client::SignalCurvePool** StaticGet__instance()
		{
			return (::RPG::Client::SignalCurvePool**)Il2CppClass::FromTypeDefinitionIndex(SignalCurvePool_TypeDefinitionIndex)->GetStaticField(0x21E80);
		}
		static ::RPG::Client::SignalCurvePool** StaticGet__currentScenePool()
		{
			return (::RPG::Client::SignalCurvePool**)Il2CppClass::FromTypeDefinitionIndex(SignalCurvePool_TypeDefinitionIndex)->GetStaticField(0x21E88);
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

		::System::Void Method_3_CCD88C0D86A5A786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_CCD88C0D86A5A786_OFFSET))(this);
		}

		::System::Void Method_3_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Int32 Method_3_3A5CCD2FDB6F9738(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3A5CCD2FDB6F9738_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* Method_3_69CEABFED67045C9(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_69CEABFED67045C9_OFFSET))(this, a1);
		}

		::RPG::Client::SignalCurvePoolEntry* Method_3_F91B0AD50C072273(::System::Int32 a1)
		{
			return ((::RPG::Client::SignalCurvePoolEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F91B0AD50C072273_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* Method_3_2AB12BF7608A20EF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_2AB12BF7608A20EF_OFFSET))(this);
		}

		::System::Void Method_3_3F07804D8892197E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3F07804D8892197E_OFFSET))(this, a1);
		}

		::System::Void Method_3_3F07804D8892197E_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3F07804D8892197E_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_3129BDB20712C068(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_3129BDB20712C068_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_B260AE72D1F1CB0C(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_B260AE72D1F1CB0C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_METHOD_3_F978A1D172468895_OFFSET))(this);
		}
	};
}
