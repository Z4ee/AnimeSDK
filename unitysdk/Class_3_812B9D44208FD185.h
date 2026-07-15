#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardSimpleTalkData; }

#define CLASS_3_812B9D44208FD185_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0xBBDB5D0)
#define CLASS_3_812B9D44208FD185_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0xBBDB610)
#define CLASS_3_812B9D44208FD185__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDB600)

inline static constexpr unsigned int Class_3_812B9D44208FD185_TypeDefinitionIndex = 19162;

class Class_3_812B9D44208FD185 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::FateRinCaseBoardSimpleTalkData*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_812B9D44208FD185__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_812B9D44208FD185*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_812B9D44208FD185*&))((::PBYTE)hIl2Cpp + CLASS_3_812B9D44208FD185_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_812B9D44208FD185* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_812B9D44208FD185*))((::PBYTE)hIl2Cpp + CLASS_3_812B9D44208FD185_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
