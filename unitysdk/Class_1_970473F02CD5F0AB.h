#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_970473F02CD5F0AB_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1C955640)
#define CLASS_1_970473F02CD5F0AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C955A40)

inline static constexpr unsigned int Class_1_970473F02CD5F0AB_TypeDefinitionIndex = 11467;

class Class_1_970473F02CD5F0AB : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* MHNEABPPJBG; // 0x10
	::Il2CppArray<::System::UInt32>* LMPLLJFMFEC; // 0x18
	::Il2CppArray<::System::UInt32>* ECCJCKCCPBP; // 0x20
	::RPG::GameCore::FateAreaType ANKBAKDHDJD; // 0x28
	::System::UInt32 BEOFPCAACEP; // 0x2C
	::System::UInt32 FAEHFMIFPBG; // 0x30
	::RPG::Client::TextID LMFDBGIAPFC; // 0x38
	::RPG::Client::TextID GIGIHGOFGMN; // 0x48
	::RPG::Client::TextID NDAAAOEGMNL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_970473F02CD5F0AB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_970473F02CD5F0AB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_970473F02CD5F0AB*&))((::PBYTE)hIl2Cpp + CLASS_1_970473F02CD5F0AB_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
