#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_F14A6232F3D8EB1E_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x16DAEE40)
#define CLASS_1_F14A6232F3D8EB1E__CTOR_OFFSET UNITYSDK_OFFSET(0x16DAF410)

inline static constexpr unsigned int Class_1_F14A6232F3D8EB1E_TypeDefinitionIndex = 13800;

class Class_1_F14A6232F3D8EB1E : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_10; // 0x18
	::System::String* Field_1_1; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_8; // 0x28
	::RPG::Client::TextID Field_1_5; // 0x30
	::RPG::Client::TextID Field_1_7; // 0x40
	::RPG::Client::TextID Field_1_4; // 0x50
	::System::UInt32 Field_1_12; // 0x60
	::System::Boolean Field_1_11; // 0x64
	::System::UInt32 Field_1_9; // 0x68
	::System::UInt32 Field_1_0; // 0x6C
	::RPG::Client::TextID Field_1_3; // 0x70
	::RPG::Client::TextID Field_1_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F14A6232F3D8EB1E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F14A6232F3D8EB1E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F14A6232F3D8EB1E*&))((::PBYTE)hIl2Cpp + CLASS_1_F14A6232F3D8EB1E_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
