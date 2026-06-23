#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/SingletonDisposable_1.h"

namespace MoleMole { class MonoRenderHandler; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_A8429A73FC2DF5B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B815A0)
#define CLASS_2_A8429A73FC2DF5B7_METHOD_2_57A0C7EA6723D6BA_1_OFFSET UNITYSDK_OFFSET(0x18B81A70)
#define CLASS_2_A8429A73FC2DF5B7_METHOD_2_57A0C7EA6723D6BA_OFFSET UNITYSDK_OFFSET(0x18B816E0)
#define CLASS_2_A8429A73FC2DF5B7_METHOD_2_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x18B81790)
#define CLASS_2_A8429A73FC2DF5B7_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18B815E0)
#define CLASS_2_A8429A73FC2DF5B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18B81620)

inline static constexpr unsigned int Class_2_A8429A73FC2DF5B7_TypeDefinitionIndex = 61898;

class Class_2_A8429A73FC2DF5B7 : public ::Nap::NapECS::SingletonDisposable_1<::Class_2_A8429A73FC2DF5B7*>
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoRenderHandler*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_57A0C7EA6723D6BA(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7_METHOD_2_57A0C7EA6723D6BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7_METHOD_2_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void Method_2_57A0C7EA6723D6BA_1(::MoleMole::MonoRenderHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_A8429A73FC2DF5B7_METHOD_2_57A0C7EA6723D6BA_1_OFFSET))(this, a1);
	}
};
