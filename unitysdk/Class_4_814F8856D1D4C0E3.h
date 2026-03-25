#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_814F8856D1D4C0E3_METHOD_4_2A21825139A2BC89_OFFSET UNITYSDK_OFFSET(0x111119C0)
#define CLASS_4_814F8856D1D4C0E3_METHOD_4_2CD1E97719BF6120_OFFSET UNITYSDK_OFFSET(0x11111DE0)
#define CLASS_4_814F8856D1D4C0E3__CTOR_OFFSET UNITYSDK_OFFSET(0x111119B0)

inline static constexpr unsigned int Class_4_814F8856D1D4C0E3_TypeDefinitionIndex = 63180;

class Class_4_814F8856D1D4C0E3 : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_73A10F032383DACF* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_73A10F032383DACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_73A10F032383DACF*))((::PBYTE)hIl2Cpp + CLASS_4_814F8856D1D4C0E3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_2A21825139A2BC89(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_814F8856D1D4C0E3_METHOD_4_2A21825139A2BC89_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_2CD1E97719BF6120(::RPG::GameCore::ChimeraDuelTalkNode* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_814F8856D1D4C0E3_METHOD_4_2CD1E97719BF6120_OFFSET))(this, P0);
	}
};
