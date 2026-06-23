#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F08E82E14FA7DBA7;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_CLONE_OFFSET UNITYSDK_OFFSET(0x1704EC90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1704EC80)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704EF40)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1704EE00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x1704F0F0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET UNITYSDK_OFFSET(0x1704F0B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1704ED90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704EF50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704EE60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704EF60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1704EE70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1704F130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementStateControl_TypeDefinitionIndex = 77769;

	class ConfigMovementStateControl : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovementStateControl* Clone()
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementStateControl* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementStateControl* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementStateControl*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>* GetControlTimePointList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_F08E82E14FA7DBA7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETCONTROLTIMEPOINTLIST_OFFSET))(this);
		}

		::System::Single GetAllowCheckFallDownNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSTATECONTROL_GETALLOWCHECKFALLDOWNNORMALIZEDTIME_OFFSET))(this);
		}
	};
}
