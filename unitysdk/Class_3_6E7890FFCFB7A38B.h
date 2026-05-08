#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_6E7890FFCFB7A38B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12969540)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_279ECCDF5A38A547_OFFSET UNITYSDK_OFFSET(0x12969A50)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_9E273918EE1BE07B_OFFSET UNITYSDK_OFFSET(0x12969FC0)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12969D40)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12969DD0)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x12969E60)
#define CLASS_3_6E7890FFCFB7A38B_METHOD_3_FADBDF6B666E37DE_OFFSET UNITYSDK_OFFSET(0x129698B0)
#define CLASS_3_6E7890FFCFB7A38B_UPDATE_OFFSET UNITYSDK_OFFSET(0x12969700)
#define CLASS_3_6E7890FFCFB7A38B__CTOR_OFFSET UNITYSDK_OFFSET(0x12969860)

inline static constexpr unsigned int Class_3_6E7890FFCFB7A38B_TypeDefinitionIndex = 61985;

class Class_3_6E7890FFCFB7A38B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_FADBDF6B666E37DE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_FADBDF6B666E37DE_OFFSET))(a1);
	}

	static ::System::Void Method_3_279ECCDF5A38A547(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_279ECCDF5A38A547_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_F4F1E7D1CC26024A_OFFSET))(a1);
	}

	::System::Void Method_3_9E273918EE1BE07B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B_METHOD_3_9E273918EE1BE07B_OFFSET))(this, a1);
	}
};
