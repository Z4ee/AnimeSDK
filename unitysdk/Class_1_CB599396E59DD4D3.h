#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_CB599396E59DD4D3_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1DC18540)
#define CLASS_1_CB599396E59DD4D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBFD90)

inline static constexpr unsigned int Class_1_CB599396E59DD4D3_TypeDefinitionIndex = 12474;

class Class_1_CB599396E59DD4D3 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PEOFHNELHLJ; // 0x10
	::Il2CppArray<::System::UInt32>* EBDLFNOELLO; // 0x18
	::Il2CppArray<::System::UInt32>* PPNLEBDNKNI; // 0x20
	::System::String* AJJOOHJFNMC; // 0x28
	::Il2CppArray<::System::UInt32>* JDKLJBMHHKO; // 0x30
	::System::String* IOCHHAPIOJA; // 0x38
	::RPG::Client::TextID MMOFKKMMKLK; // 0x40
	::System::UInt32 PHFMCACHFIJ; // 0x50
	::System::UInt32 BFDOFFNMCPO; // 0x54
	::RPG::GameCore::TeamTowersStageType GMPGDEINODK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB599396E59DD4D3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CB599396E59DD4D3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CB599396E59DD4D3*&))((::PBYTE)hIl2Cpp + CLASS_1_CB599396E59DD4D3_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
