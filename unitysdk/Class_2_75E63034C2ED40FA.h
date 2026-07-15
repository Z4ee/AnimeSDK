#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA642DEE53091501.h"

class Class_1_43BD383C98B4C0C5_193;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_75E63034C2ED40FA_METHOD_2_0048967BC95D1DCB_1_OFFSET UNITYSDK_OFFSET(0x1731E490)
#define CLASS_2_75E63034C2ED40FA_METHOD_2_0048967BC95D1DCB_OFFSET UNITYSDK_OFFSET(0x1731E3A0)
#define CLASS_2_75E63034C2ED40FA_METHOD_2_FD2AC483192E81E2_OFFSET UNITYSDK_OFFSET(0x1731E580)
#define CLASS_2_75E63034C2ED40FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1731E6A0)

inline static constexpr unsigned int Class_2_75E63034C2ED40FA_TypeDefinitionIndex = 73489;

class Class_2_75E63034C2ED40FA : public ::Class_1_AA642DEE53091501
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75E63034C2ED40FA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_0048967BC95D1DCB(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_193*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_193*&))((::PBYTE)hIl2Cpp + CLASS_2_75E63034C2ED40FA_METHOD_2_0048967BC95D1DCB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_0048967BC95D1DCB_1(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_193*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_193*&))((::PBYTE)hIl2Cpp + CLASS_2_75E63034C2ED40FA_METHOD_2_0048967BC95D1DCB_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_FD2AC483192E81E2(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_75E63034C2ED40FA_METHOD_2_FD2AC483192E81E2_OFFSET))(this, a1, a2, a3);
	}
};
