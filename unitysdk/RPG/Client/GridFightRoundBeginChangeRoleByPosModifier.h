#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER_GET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xBBEF690)
#define RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER_SET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xBBEF6A0)
#define RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEF5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoundBeginChangeRoleByPosModifier_TypeDefinitionIndex = 60786;

	class GridFightRoundBeginChangeRoleByPosModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PosIndexs_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PosIndexs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER_GET_POSINDEXS_OFFSET))(this);
		}

		::System::Void set_PosIndexs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINCHANGEROLEBYPOSMODIFIER_SET_POSINDEXS_OFFSET))(this, a1);
		}
	};
}
