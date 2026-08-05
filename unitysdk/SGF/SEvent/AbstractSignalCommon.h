#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/AbstractSignalCommon_SCustomDebugName.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"
#include "unitysdk/System/Object.h"

#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_GETLISTENERCOUNT_OFFSET UNITYSDK_OFFSET(0x1F699DF0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET_CUSTOMDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1F699E30)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET_HASLISTENER_OFFSET UNITYSDK_OFFSET(0x1F699DE0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET__METHODS_OFFSET UNITYSDK_OFFSET(0x1F699E50)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_SET_CUSTOMDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1F699E40)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON__CTOR_OFFSET UNITYSDK_OFFSET(0x1F699EE0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int AbstractSignalCommon_TypeDefinitionIndex = 7842;

	class AbstractSignalCommon : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableDetailDebugName_ForInvoke()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AbstractSignalCommon_TypeDefinitionIndex)->GetStaticField(0x135E0);
		}
		::Il2CppArray<::SGF::SEvent::DelegateEx>* __methods; // 0x10
		::SGF::SEvent::AbstractSignalCommon_SCustomDebugName _customDebugName; // 0x18
		::System::Int32 _methodCount; // 0x28
		::System::Int32 _capacity; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasListener()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET_HASLISTENER_OFFSET))(this);
		}

		::System::Int32 GetListenerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_GETLISTENERCOUNT_OFFSET))(this);
		}

		::SGF::SEvent::AbstractSignalCommon_SCustomDebugName get_CustomDebugName()
		{
			return ((::SGF::SEvent::AbstractSignalCommon_SCustomDebugName(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET_CUSTOMDEBUGNAME_OFFSET))(this);
		}

		::System::Void set_CustomDebugName(::SGF::SEvent::AbstractSignalCommon_SCustomDebugName value)
		{
			return ((::System::Void(*)(::PVOID, ::SGF::SEvent::AbstractSignalCommon_SCustomDebugName))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_SET_CUSTOMDEBUGNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::SGF::SEvent::DelegateEx>*& get__methods()
		{
			return ((::Il2CppArray<::SGF::SEvent::DelegateEx>*&(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_GET__METHODS_OFFSET))(this);
		}
	};
}
