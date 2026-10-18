#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7299F3F30C95C687_METHOD_1_2BB98C492DB4972B_OFFSET UNITYSDK_OFFSET(0x1C51EA40)
#define CLASS_1_7299F3F30C95C687_METHOD_1_39816807C65B89E3_OFFSET UNITYSDK_OFFSET(0x1C51EA00)
#define CLASS_1_7299F3F30C95C687_METHOD_1_76320D2688D9351C_OFFSET UNITYSDK_OFFSET(0x1C51E9C0)
#define CLASS_1_7299F3F30C95C687_METHOD_1_AF45CE65423CEF6E_OFFSET UNITYSDK_OFFSET(0x1C51EDA0)
#define CLASS_1_7299F3F30C95C687_METHOD_1_B5BC8BA1D10996FE_OFFSET UNITYSDK_OFFSET(0x1C51EAF0)
#define CLASS_1_7299F3F30C95C687_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x1C51E950)

inline static constexpr unsigned int Class_1_7299F3F30C95C687_TypeDefinitionIndex = 41643;

class Class_1_7299F3F30C95C687 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::RPG::Client::MechCraft::MechCraftAttributeType Method_1_76320D2688D9351C()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)())((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_76320D2688D9351C_OFFSET))();
	}

	static ::RPG::Client::MechCraft::MechCraftAttributeType Method_1_39816807C65B89E3()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)())((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_39816807C65B89E3_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* Method_1_2BB98C492DB4972B(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_2BB98C492DB4972B_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B5BC8BA1D10996FE(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_B5BC8BA1D10996FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF45CE65423CEF6E(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::RPG::Client::MechCraft::MechCraftAttributeType, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687_METHOD_1_AF45CE65423CEF6E_OFFSET))(a1, a2, a3);
	}
};
