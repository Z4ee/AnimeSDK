#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigMovementStateControl.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F08E82E14FA7DBA7;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_CLONE_OFFSET UNITYSDK_OFFSET(0x183D0940)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x183D0930)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x183D0FD0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x183D0AB0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x183D1560)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x183D1380)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x183D0A40)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x183D1030)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x183D0B30)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x183D11D0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x183D0E70)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x183D15B0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x183D15C0)
#define MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x183D1650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitSkyStateControl_TypeDefinitionIndex = 41477;

	class HitSkyStateControl : public ::MoleMole::Config::ConfigMovementStateControl
	{
	public:
		::System::Single ToFloatNormalizedTime; // 0x10
		::System::Single ToFallNormalizedTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovementStateControl* Clone()
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HitSkyStateControl* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HitSkyStateControl*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HitSkyStateControl* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HitSkyStateControl*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>* GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}

		::System::Single GetAllowCheckFallDownNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Single __base_GetAllowCheckFallDownNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>* __base_GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITSKYSTATECONTROL___BASE_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}
	};
}
