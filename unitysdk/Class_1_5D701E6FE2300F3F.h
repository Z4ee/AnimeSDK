#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D701E6FE2300F3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9729890)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9729A10)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_515AB539783606E0_OFFSET UNITYSDK_OFFSET(0x9729B00)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x97298F0)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x9729F70)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x9729740)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x972A0D0)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_A794AA5B92939598_OFFSET UNITYSDK_OFFSET(0x9729D00)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x9729C20)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x9729E20)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x972A160)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_DAE67D4DC8B67113_OFFSET UNITYSDK_OFFSET(0x972A200)
#define CLASS_1_5D701E6FE2300F3F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x97296C0)
#define CLASS_1_5D701E6FE2300F3F__CTOR_OFFSET UNITYSDK_OFFSET(0x97296D0)

inline static constexpr unsigned int Class_1_5D701E6FE2300F3F_TypeDefinitionIndex = 56154;

class Class_1_5D701E6FE2300F3F : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::UInt32 Field_1_9 = 0x3E4BA9; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_10; // 0x10
	::RPG::Client::AdventurePhase* Field_1_2; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_3; // 0x26
	::System::Boolean Field_1_6; // 0x27
	::System::Single Field_1_8; // 0x28

	::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_515AB539783606E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_515AB539783606E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A794AA5B92939598(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_A794AA5B92939598_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_1_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAE67D4DC8B67113(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_DAE67D4DC8B67113_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D701E6FE2300F3F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
