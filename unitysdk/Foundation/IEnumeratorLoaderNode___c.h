#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IEnumeratorLoaderNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_IENUMERATORLOADERNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D970CC0)
#define FOUNDATION_IENUMERATORLOADERNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D970D00)
#define FOUNDATION_IENUMERATORLOADERNODE___C__DEPENDENCYSTATUSCHANGE_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D970D50)
#define FOUNDATION_IENUMERATORLOADERNODE___C__SETDATA_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D970D10)
#define FOUNDATION_IENUMERATORLOADERNODE___C__SETDATA_B__25_1_OFFSET UNITYSDK_OFFSET(0x1D970D30)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoaderNode___c_TypeDefinitionIndex = 8453;

	class IEnumeratorLoaderNode___c : public ::System::Object
	{
	public:
		static ::Foundation::IEnumeratorLoaderNode___c** StaticGet___9()
		{
			return (::Foundation::IEnumeratorLoaderNode___c**)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderNode___c_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		static ::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderNode___c_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderNode___c_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Foundation::IEnumeratorLoaderNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IEnumeratorLoaderNode___c_TypeDefinitionIndex)->GetStaticField(0x6DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetData_b__25_0(::Foundation::IEnumeratorLoaderNode* denpenNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE___C__SETDATA_B__25_0_OFFSET))(this, denpenNode);
		}

		::System::Boolean _SetData_b__25_1(::Foundation::IEnumeratorLoaderNode* denpenNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE___C__SETDATA_B__25_1_OFFSET))(this, denpenNode);
		}

		::System::Boolean _DependencyStatusChange_b__28_0(::Foundation::IEnumeratorLoaderNode* denpenNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE___C__DEPENDENCYSTATUSCHANGE_B__28_0_OFFSET))(this, denpenNode);
		}
	};
}
