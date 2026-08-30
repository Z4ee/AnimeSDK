#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_3778ED0D1EBF18B3;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1BC52F10)
#define RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BC52D60)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_BONUSID_OFFSET UNITYSDK_OFFSET(0x1BC53060)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BC52FA0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1BC53190)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBID_OFFSET UNITYSDK_OFFSET(0x1BC52FE0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBNAME_OFFSET UNITYSDK_OFFSET(0x1BC530E0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1BC2C9D0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BC52EA0)
#define RPG_CLIENT_GRIDFIGHTORBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC52E80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbData_TypeDefinitionIndex = 64498;

	class GridFightOrbData : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_3778ED0D1EBF18B3* _config; // 0x18
		::System::UInt32 _Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightOrbData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void ClearCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET))(this, a1);
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
