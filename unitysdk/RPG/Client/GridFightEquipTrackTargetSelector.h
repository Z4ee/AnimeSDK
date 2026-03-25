#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0812913C2F0E10CD;
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_GETSELECTORTARGET_OFFSET UNITYSDK_OFFSET(0x9806F60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__COMPAREROLE_OFFSET UNITYSDK_OFFSET(0x9810C30)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9807DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackTargetSelector_TypeDefinitionIndex = 53070;

	class GridFightEquipTrackTargetSelector : public ::System::Object
	{
	public:
		::Class_1_0812913C2F0E10CD* _TrackContext; // 0x10

		::System::Void _ctor(::Class_1_0812913C2F0E10CD* trackContext)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0812913C2F0E10CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__CTOR_OFFSET))(this, trackContext);
		}

		::RPG::Client::GridFightGridMember* GetSelectorTarget(::System::UInt32 memberID)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR_GETSELECTORTARGET_OFFSET))(this, memberID);
		}

		::System::Int32 _CompareRole(::RPG::Client::GridFightRole* a, ::RPG::Client::GridFightRole* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKTARGETSELECTOR__COMPAREROLE_OFFSET))(this, a, b);
		}
	};
}
