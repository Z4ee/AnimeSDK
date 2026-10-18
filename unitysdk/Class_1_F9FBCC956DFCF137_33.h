#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_258DC369B7CE2A57;
namespace System { class String; }

#define CLASS_1_F9FBCC956DFCF137_33_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xBBA2770)
#define CLASS_1_F9FBCC956DFCF137_33_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xBBA2880)
#define CLASS_1_F9FBCC956DFCF137_33_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBBA28D0)
#define CLASS_1_F9FBCC956DFCF137_33_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0xBBA2810)
#define CLASS_1_F9FBCC956DFCF137_33_METHOD_1_F837677251B74F96_OFFSET UNITYSDK_OFFSET(0xBBA27C0)
#define CLASS_1_F9FBCC956DFCF137_33__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA2920)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_33_TypeDefinitionIndex = 80086;

class Class_1_F9FBCC956DFCF137_33 : public ::System::Object
{
public:
	::Class_1_258DC369B7CE2A57* IBPBJBOKKMF; // 0x10

	::System::Void _ctor(::Class_1_258DC369B7CE2A57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_258DC369B7CE2A57*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33_GET_CACHEKEY_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType Method_1_F837677251B74F96()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33_METHOD_1_F837677251B74F96_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_33_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
