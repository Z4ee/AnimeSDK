#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::OpenWorld { class OfflineCullingCellData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSerializeData; }
namespace RPG::Client::OpenWorld { class OfflineCullingCellSubData; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_546CA607D5903CEA_OFFSET UNITYSDK_OFFSET(0x1289F460)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_77C0199D616F4DD4_OFFSET UNITYSDK_OFFSET(0x1289EAC0)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_88D380C923AB3C88_OFFSET UNITYSDK_OFFSET(0x1289F840)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_C8B250BD3387D5DC_OFFSET UNITYSDK_OFFSET(0x1289FA20)

inline static constexpr unsigned int Class_1_41AB67DC5CFFAAC0_TypeDefinitionIndex = 67892;

class Class_1_41AB67DC5CFFAAC0 : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonOfflineCullingCellData* Method_1_77C0199D616F4DD4(::RPG::Client::OpenWorld::OfflineCullingCellData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_77C0199D616F4DD4_OFFSET))(a1);
	}

	static ::RPG::GameCore::JsonOfflineCullingCellSubData* Method_1_546CA607D5903CEA(::RPG::Client::OpenWorld::OfflineCullingCellSubData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellSubData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_546CA607D5903CEA_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_C8B250BD3387D5DC(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_C8B250BD3387D5DC_OFFSET))(a1);
	}

	static ::RPG::GameCore::JsonOfflineCullingCellSerializeData* Method_1_88D380C923AB3C88(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellSerializeData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_88D380C923AB3C88_OFFSET))(a1);
	}
};
