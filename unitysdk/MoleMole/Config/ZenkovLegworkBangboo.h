#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD7BCA0)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7BDA0)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7BC90)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7C2D0)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7BF40)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BD7BD90)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7C330)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7BFC0)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD7C5A0)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BD7C190)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7C730)
#define MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD7C740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovLegworkBangboo_TypeDefinitionIndex = 82884;

	class ZenkovLegworkBangboo : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 BoxNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovLegworkBangboo* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovLegworkBangboo*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovLegworkBangboo* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovLegworkBangboo*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLEGWORKBANGBOO___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
