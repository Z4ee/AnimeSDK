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

#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_546CA607D5903CEA_OFFSET UNITYSDK_OFFSET(0xBA2A400)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_BD7A77CAEACCF11A_OFFSET UNITYSDK_OFFSET(0xBA2A830)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_BE28C74765DA9397_OFFSET UNITYSDK_OFFSET(0xBA2AA30)
#define CLASS_1_41AB67DC5CFFAAC0_METHOD_1_FC0D600065D95320_OFFSET UNITYSDK_OFFSET(0xBA29DE0)

inline static constexpr unsigned int Class_1_41AB67DC5CFFAAC0_TypeDefinitionIndex = 73652;

class Class_1_41AB67DC5CFFAAC0 : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonOfflineCullingCellData* Method_1_FC0D600065D95320(::RPG::Client::OpenWorld::OfflineCullingCellData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_FC0D600065D95320_OFFSET))(a1);
	}

	static ::RPG::GameCore::JsonOfflineCullingCellSubData* Method_1_546CA607D5903CEA(::RPG::Client::OpenWorld::OfflineCullingCellSubData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellSubData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSubData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_546CA607D5903CEA_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_BE28C74765DA9397(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_BE28C74765DA9397_OFFSET))(a1);
	}

	static ::RPG::GameCore::JsonOfflineCullingCellSerializeData* Method_1_BD7A77CAEACCF11A(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData* a1)
	{
		return ((::RPG::GameCore::JsonOfflineCullingCellSerializeData*(*)(::RPG::Client::OpenWorld::OfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + CLASS_1_41AB67DC5CFFAAC0_METHOD_1_BD7A77CAEACCF11A_OFFSET))(a1);
	}
};
