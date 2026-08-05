#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }

#define CLASS_1_4AC26411646E4F6D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1860FF50)
#define CLASS_1_4AC26411646E4F6D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1860FF10)
#define CLASS_1_4AC26411646E4F6D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1860FED0)
#define CLASS_1_4AC26411646E4F6D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1860FE90)
#define CLASS_1_4AC26411646E4F6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1860FE70)

inline static constexpr unsigned int Class_1_4AC26411646E4F6D_TypeDefinitionIndex = 44336;

class Class_1_4AC26411646E4F6D : public ::System::Object
{
public:
	::MoleMole::ClientSceneObjectStateLooperConfigBase* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::ClientSceneObjectStateLooperConfigBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_4AC26411646E4F6D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC26411646E4F6D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC26411646E4F6D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AC26411646E4F6D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AC26411646E4F6D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
