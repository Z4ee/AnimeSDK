#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TextJoinItemRow; }
namespace System { class String; }

#define CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_GET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0x19A8FD20)
#define CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x19A8F9A0)
#define CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_SET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0x19A8FD30)
#define CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8F6D0)

inline static constexpr unsigned int Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031_TypeDefinitionIndex = 74288;

class Class_1_D492DB4F73CB089D_Class_1_CB1937A7F4F28031 : public ::System::Object
{
public:
	::RPG::Client::TextID GEPFFDDHPAI; // 0x10
	::System::UInt32 _TextJoinItemId_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::TextJoinItemRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_TextJoinItemId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_GET_TEXTJOINITEMID_OFFSET))(this);
	}

	::System::Void set_TextJoinItemId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_SET_TEXTJOINITEMID_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_CLASS_1_CB1937A7F4F28031_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
