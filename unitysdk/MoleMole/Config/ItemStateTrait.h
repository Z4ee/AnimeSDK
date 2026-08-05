#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/StringBoolPair.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace MoleMole { class MonoItemState; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4E9520)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4E9620)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4E94D0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E9C00)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E97C0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B4E9610)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E9C60)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E9840)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B4E9FE0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4E9E50)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4E9AC0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT_UPDATEITEMSTATE_OFFSET UNITYSDK_OFFSET(0x1B4EA2A0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EA5E0)
#define MOLEMOLE_CONFIG_ITEMSTATETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4EA5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ItemStateTrait_TypeDefinitionIndex = 60141;

	class ItemStateTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::StringBoolPair>* ItemState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ItemStateTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ItemStateTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ItemStateTrait* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ItemStateTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Void UpdateItemState(::MoleMole::MonoItemState* monoItemState, ::System::Collections::Generic::List_1<::MoleMole::Config::StringBoolPair>* itemStateList)
		{
			return ((::System::Void(*)(::MoleMole::MonoItemState*, ::System::Collections::Generic::List_1<::MoleMole::Config::StringBoolPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT_UPDATEITEMSTATE_OFFSET))(monoItemState, itemStateList);
		}

		::System::Void __base_ExposeMember(::Class_0_16E4307DCC419505_198* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ITEMSTATETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
