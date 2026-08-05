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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1487DDB0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1487DEB0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1487DD40)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1487E670)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1487E130)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1487DEA0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1487E6D0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1487E1B0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1487EA90)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1487E530)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1487EC20)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1487EC30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovErosionRegionTrait_TypeDefinitionIndex = 43678;

	class ZenkovErosionRegionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GroupIdList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* MapIconTraitMemberConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovErosionRegionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovErosionRegionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovErosionRegionTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovErosionRegionTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
