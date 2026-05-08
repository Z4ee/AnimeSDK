#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2B72FBE43B450502___C_METHOD_1_2594FD84EB676273_OFFSET UNITYSDK_OFFSET(0x13F9A340)
#define CLASS_1_2B72FBE43B450502___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F9A2F0)
#define CLASS_1_2B72FBE43B450502___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F9A330)

inline static constexpr unsigned int Class_1_2B72FBE43B450502___c_TypeDefinitionIndex = 76085;

class Class_1_2B72FBE43B450502___c : public ::System::Object
{
public:
	static ::Class_1_2B72FBE43B450502___c** StaticGet___9()
	{
		return (::Class_1_2B72FBE43B450502___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B72FBE43B450502___c_TypeDefinitionIndex)->GetStaticField(0x2DB80);
	}
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B72FBE43B450502___c_TypeDefinitionIndex)->GetStaticField(0x2DB88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2594FD84EB676273(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502___C_METHOD_1_2594FD84EB676273_OFFSET))(this, a1);
	}
};
