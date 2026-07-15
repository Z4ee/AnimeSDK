#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A610610)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A610660)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6102F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__GETISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A610400)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineTraitStateParserBase_TypeDefinitionIndex = 62574;

	class GridFightTraitRemarkLineTraitStateParserBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _Layers; // 0x10
		::RPG::Client::GridFightTrait* _trait; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetIsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE__GETISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITSTATEPARSERBASE_GET_ISSHOW_OFFSET))(this);
		}
	};
}
