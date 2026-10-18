#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_965EB4ED882F86FF;
namespace System { class String; }

#define CLASS_1_F9FBCC956DFCF137_35_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB9BB140)
#define CLASS_1_F9FBCC956DFCF137_35_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xB9BB250)
#define CLASS_1_F9FBCC956DFCF137_35_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB9BB2E0)
#define CLASS_1_F9FBCC956DFCF137_35_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0xB9BB1E0)
#define CLASS_1_F9FBCC956DFCF137_35_METHOD_1_DE2BEBEA33124B70_OFFSET UNITYSDK_OFFSET(0xB9BB190)
#define CLASS_1_F9FBCC956DFCF137_35__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BB330)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_35_TypeDefinitionIndex = 80157;

class Class_1_F9FBCC956DFCF137_35 : public ::System::Object
{
public:
	::Class_1_965EB4ED882F86FF* IBPBJBOKKMF; // 0x10

	::System::Void _ctor(::Class_1_965EB4ED882F86FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_965EB4ED882F86FF*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35_GET_CACHEKEY_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType Method_1_DE2BEBEA33124B70()
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35_METHOD_1_DE2BEBEA33124B70_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_35_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
