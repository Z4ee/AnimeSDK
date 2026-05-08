#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_4E8656EE8749AFB7_METHOD_1_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x123D3E70)
#define CLASS_1_4E8656EE8749AFB7_METHOD_1_4B86F2396ECBF741_OFFSET UNITYSDK_OFFSET(0x123D4010)
#define CLASS_1_4E8656EE8749AFB7_METHOD_1_711F0413C159D098_OFFSET UNITYSDK_OFFSET(0x123D4000)
#define CLASS_1_4E8656EE8749AFB7__CTOR_OFFSET UNITYSDK_OFFSET(0x123D3E60)

inline static constexpr unsigned int Class_1_4E8656EE8749AFB7_TypeDefinitionIndex = 38079;

class Class_1_4E8656EE8749AFB7 : public ::System::Object
{
public:
	::System::Func_1<::MoleMole::EntityHandle>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Func_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_4E8656EE8749AFB7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E8656EE8749AFB7_METHOD_1_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Void Method_1_711F0413C159D098(::System::Func_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_4E8656EE8749AFB7_METHOD_1_711F0413C159D098_OFFSET))(this, a1);
	}

	::System::Func_1<::MoleMole::EntityHandle>* Method_1_4B86F2396ECBF741()
	{
		return ((::System::Func_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E8656EE8749AFB7_METHOD_1_4B86F2396ECBF741_OFFSET))(this);
	}
};
