#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define CLASS_3_FFD6FEDD2A6D8D46_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0xBAE64C0)
#define CLASS_3_FFD6FEDD2A6D8D46_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0xBAE6510)
#define CLASS_3_FFD6FEDD2A6D8D46__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE6500)

inline static constexpr unsigned int Class_3_FFD6FEDD2A6D8D46_TypeDefinitionIndex = 20358;

class Class_3_FFD6FEDD2A6D8D46 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::Client::TextID Field_3_3; // 0x30
	::System::Single Field_3_4; // 0x40
	::System::Single Field_3_5; // 0x44
	::System::Boolean Field_3_6; // 0x48
	::System::Boolean Field_3_7; // 0x49
	::System::Boolean Field_3_8; // 0x4A
	::System::Boolean Field_3_9; // 0x4B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD6FEDD2A6D8D46__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FFD6FEDD2A6D8D46*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FFD6FEDD2A6D8D46*&))((::PBYTE)hIl2Cpp + CLASS_3_FFD6FEDD2A6D8D46_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FFD6FEDD2A6D8D46* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FFD6FEDD2A6D8D46*))((::PBYTE)hIl2Cpp + CLASS_3_FFD6FEDD2A6D8D46_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
