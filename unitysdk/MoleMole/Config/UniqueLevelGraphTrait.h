#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
class Class_1_BE29B49AC03370B6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192135A0)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192136A0)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19213530)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19213E00)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19213840)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19214250)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19213690)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19213E60)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192138C0)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192140C0)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19213CC0)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19214310)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19214320)
#define MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19214330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UniqueLevelGraphTrait_TypeDefinitionIndex = 50303;

	class UniqueLevelGraphTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* GraphName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* InitParam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::UniqueLevelGraphTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::UniqueLevelGraphTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::UniqueLevelGraphTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::UniqueLevelGraphTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::Class_1_BE29B49AC03370B6* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::Class_1_BE29B49AC03370B6* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UNIQUELEVELGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
