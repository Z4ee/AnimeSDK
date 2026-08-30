#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_386D61DA33668FFE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD8224D0)
#define CLASS_1_386D61DA33668FFE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD822520)
#define CLASS_1_386D61DA33668FFE_METHOD_1_570EF476FB8FB795_OFFSET UNITYSDK_OFFSET(0xD821F40)
#define CLASS_1_386D61DA33668FFE__CTOR_OFFSET UNITYSDK_OFFSET(0xD821F00)
#define CLASS_1_386D61DA33668FFE__GET_ISSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0xD822710)
#define CLASS_1_386D61DA33668FFE___GETISACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD8225D0)

inline static constexpr unsigned int Class_1_386D61DA33668FFE_TypeDefinitionIndex = 65550;

class Class_1_386D61DA33668FFE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BDJNLOEBEIJ; // 0x10
	::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_570EF476FB8FB795()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_METHOD_1_570EF476FB8FB795_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE_GET_ISSHOW_OFFSET))(this);
	}

	::System::Boolean __GetIsActive_b__1_0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE___GETISACTIVE_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_IsShow_b__5_0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_386D61DA33668FFE__GET_ISSHOW_B__5_0_OFFSET))(this, a1);
	}
};
