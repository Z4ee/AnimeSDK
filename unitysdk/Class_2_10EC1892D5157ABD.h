#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IGamePhase; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_10EC1892D5157ABD_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1576ED00)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1576ECA0)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x1576EE90)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x1576F0D0)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_DF9712B38F543F7D_OFFSET UNITYSDK_OFFSET(0x1576EEE0)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_E101B3D967A71F63_OFFSET UNITYSDK_OFFSET(0x1576F6A0)
#define CLASS_2_10EC1892D5157ABD_METHOD_2_E951054F23B32C13_OFFSET UNITYSDK_OFFSET(0x1576ED60)
#define CLASS_2_10EC1892D5157ABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1576EC80)

inline static constexpr unsigned int Class_2_10EC1892D5157ABD_TypeDefinitionIndex = 61184;

class Class_2_10EC1892D5157ABD : public ::Class_1_5772346ACD452D08
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_E951054F23B32C13(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_E951054F23B32C13_OFFSET))(this, a1);
	}

	::System::Void Method_2_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_A91086AED8314DB5_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_DF9712B38F543F7D()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_DF9712B38F543F7D_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_E101B3D967A71F63(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_10EC1892D5157ABD_METHOD_2_E101B3D967A71F63_OFFSET))(this, a1, a2, a3);
	}
};
