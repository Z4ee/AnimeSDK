#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4DE5172E22946B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x191B5400)
#define CLASS_1_E4DE5172E22946B7_METHOD_1_B517E01E6878D795_OFFSET UNITYSDK_OFFSET(0x191B4EC0)
#define CLASS_1_E4DE5172E22946B7_METHOD_1_CC4CA2A40C0B4346_OFFSET UNITYSDK_OFFSET(0x191B5020)
#define CLASS_1_E4DE5172E22946B7_METHOD_1_EC7D7260B4ED0477_OFFSET UNITYSDK_OFFSET(0x191B51A0)
#define CLASS_1_E4DE5172E22946B7__CTOR_OFFSET UNITYSDK_OFFSET(0x191B54B0)

inline static constexpr unsigned int Class_1_E4DE5172E22946B7_TypeDefinitionIndex = 69739;

class Class_1_E4DE5172E22946B7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* MAHNOPJIPCB; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* AFNHAJCMJAJ; // 0x18
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DE5172E22946B7__CTOR_OFFSET))(this);
	}

	::Class_1_E4DE5172E22946B7* Method_1_B517E01E6878D795(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_E4DE5172E22946B7*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E4DE5172E22946B7_METHOD_1_B517E01E6878D795_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC4CA2A40C0B4346(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E4DE5172E22946B7_METHOD_1_CC4CA2A40C0B4346_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC7D7260B4ED0477(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4DE5172E22946B7_METHOD_1_EC7D7260B4ED0477_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DE5172E22946B7_CLEAR_OFFSET))(this);
	}
};
