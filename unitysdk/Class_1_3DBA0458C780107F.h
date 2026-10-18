#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostDisplayTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_3DBA0458C780107F_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1CD7BF70)
#define CLASS_1_3DBA0458C780107F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7C170)

inline static constexpr unsigned int Class_1_3DBA0458C780107F_TypeDefinitionIndex = 13922;

class Class_1_3DBA0458C780107F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LimaoNewsPostDisplayTag>* CNCKNJMHDIL; // 0x10
	::System::UInt32 AEDOBNFDODI; // 0x18
	::System::UInt32 DGLJLJEHNNB; // 0x1C
	::System::UInt32 KMIBDJKKGDE; // 0x20
	::System::UInt32 KIFJECNOHDG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DBA0458C780107F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3DBA0458C780107F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3DBA0458C780107F*&))((::PBYTE)hIl2Cpp + CLASS_1_3DBA0458C780107F_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
