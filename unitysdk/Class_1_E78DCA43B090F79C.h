#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E78DCA43B090F79C_METHOD_1_1CAFA51EA2F8AA3A_OFFSET UNITYSDK_OFFSET(0x123E1D00)
#define CLASS_1_E78DCA43B090F79C__CTOR_OFFSET UNITYSDK_OFFSET(0x123E1F40)

inline static constexpr unsigned int Class_1_E78DCA43B090F79C_TypeDefinitionIndex = 57786;

class Class_1_E78DCA43B090F79C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ServantSkillRowData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E78DCA43B090F79C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_1CAFA51EA2F8AA3A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E78DCA43B090F79C_METHOD_1_1CAFA51EA2F8AA3A_OFFSET))(this, a1, a2);
	}
};
