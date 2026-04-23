#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDD57BA1FF01F606_Class_1_6BE7FCD5B1FC3308;
class Class_3_D97525674BFD9AB4;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DDD57BA1FF01F606_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9633CE0)
#define CLASS_1_DDD57BA1FF01F606_METHOD_1_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x9634480)
#define CLASS_1_DDD57BA1FF01F606_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x9634270)
#define CLASS_1_DDD57BA1FF01F606_METHOD_1_C8E7CD10DE71027D_OFFSET UNITYSDK_OFFSET(0x9633F20)
#define CLASS_1_DDD57BA1FF01F606_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9634630)
#define CLASS_1_DDD57BA1FF01F606_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96345F0)
#define CLASS_1_DDD57BA1FF01F606__CTOR_OFFSET UNITYSDK_OFFSET(0x9633C50)

inline static constexpr unsigned int Class_1_DDD57BA1FF01F606_TypeDefinitionIndex = 55529;

class Class_1_DDD57BA1FF01F606 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_DDD57BA1FF01F606_Class_1_6BE7FCD5B1FC3308*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C8E7CD10DE71027D(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::Class_3_D97525674BFD9AB4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::Class_3_D97525674BFD9AB4*))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_METHOD_1_C8E7CD10DE71027D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_METHOD_1_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDD57BA1FF01F606_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
