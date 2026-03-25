#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_3778ED0D1EBF18B3;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x986F9D0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x986F820)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_BONUSID_OFFSET UNITYSDK_OFFSET(0x986FAD0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x986FA60)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x986FBB0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBID_OFFSET UNITYSDK_OFFSET(0x986FA70)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBNAME_OFFSET UNITYSDK_OFFSET(0x986FB30)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9853E70)
#define RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x986F960)
#define RPG_CLIENT_GRIDFIGHTORBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x986F940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbData_TypeDefinitionIndex = 52337;

	class GridFightOrbData : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_3778ED0D1EBF18B3* _config; // 0x18
		::System::UInt32 _Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbData* Create(::System::UInt32 orbID, ::System::UInt32 count)
		{
			return ((::RPG::Client::GridFightOrbData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET))(orbID, count);
		}

		::System::Void ClearCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_OrbID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBID_OFFSET))(this);
		}

		::System::UInt32 get_BonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_BONUSID_OFFSET))(this);
		}

		::RPG::Client::TextID get_OrbName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::GridFightOrbType get_Type()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_TYPE_OFFSET))(this);
		}
	};
}
